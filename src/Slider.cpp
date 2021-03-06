#include <iostream> 
#include <algorithm>
#include <string>

#include "Point.hpp"
#include "Slider.hpp"

Slider::Slider(float x, float y, float w, float h) :
    ImageButton("stage-select/slider.png", "stage-select/slider-blue.png", x, y),
	Bar("stage-select/bar.png", x, y, w, h),
	End1("stage-select/end.png", x, y + h / 2, 0, 0, 0.5, 0.5),
	End2("stage-select/end.png", x + w, y + h / 2, 0, 0, 0.5, 0.5) 
	{
    Slider::SetValue(1);
	Position.x += w;
	Position.y += h / 2;
	Anchor = Engine::Point(0.5, 0.5);
    value = 1;
}
// TODO 4 (0/6): Finish the 6 functions below and ensure it can control both BGM and SFX volume.
//               The slider shouldn't be dragged outside the bar, and you should also keep the mouse-in / mouse-out effect.
void Slider::Draw() const {
	Bar.Engine::Image::Draw();
	End1.Engine::Image::Draw();
	End2.Engine::Image::Draw();
	Engine::Image::Draw();
	// TODO 4 (1/6): Draw all components.
}
void Slider::SetOnValueChangedCallback(std::function<void(float value)> onValueChangedCallback) {
	OnValueChangedCallback = onValueChangedCallback;
	// TODO 4 (2/6): Set the function pointer. Can imitate ImageButton's 'SetOnClickCallback'.
}
void Slider::SetValue(float value) {
	if (OnValueChangedCallback) {
        this->Position.x = End1.Position.x + (End2.Position.x - End1.Position.x)*value;
        OnValueChangedCallback(value);
    }
	// TODO 4 (3/6): Call 'OnValueChangedCallback' when value changed. Can imitate ImageButton's 'OnClickCallback'.
	//               Also move the slider along the bar, to the corresponding position.
}
void Slider::OnMouseDown(int button, int mx, int my) {
	ImageButton::OnMouseDown(button, mx, my);
	if (mouseIn) Down = true;
	else Down = false; 
	// TODO 4 (4/6): Set 'Down' to true if mouse is in the slider.
}
void Slider::OnMouseUp(int button, int mx, int my) {
	Down = false;
	ImageButton::OnMouseUp(button, mx, my);
	// TODO 4 (5/6): Set 'Down' to false.
}
void Slider::OnMouseMove(int mx, int my) {
	ImageButton::OnMouseMove(mx, my);
	// calulate value
	if (!Down || !mouseIn) return;
	if (mx < End1.Position.x || End2.Position.x < mx) return;
	float length = (float )(End2.Position.x - End1.Position.x);
	float dvalue = (float )(mx - End1.Position.x) / length;
	// call setvalue
	SetValue(dvalue);

	// TODO 4 (6/6): Clamp the coordinates and calculate the value. Call 'SetValue' when you're done.
}
