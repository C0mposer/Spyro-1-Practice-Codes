#include <common.h>
#include <moby.h>

#define FRAME_THRESHHOLD 10

int timer = 0;
int current_amount_of_presses = 0;
bool is_holding = false;

// Check if a button press has happened multiple times in succession
bool CheckButtonMultiTap(int button, int times_to_press)
{
    if (_currentButton == button && !is_holding)
    {
        timer = 1;  // 1 is On, and it will start counting from here. Avoids having a seperate bool
        is_holding = true;

        current_amount_of_presses++;
        
        if (current_amount_of_presses >= times_to_press)
        {
            return true;
        }

        else if (current_amount_of_presses < times_to_press)
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}

void MultiTapUpdate(void)
{
    if (timer > 0)
    {
        timer++;
        if (timer > FRAME_THRESHHOLD)
        {
            timer = 0;
            current_amount_of_presses = 0;
        }
    }

    if (_currentButton == 0)
    {
        is_holding = false;
    }
}