> [!IMPORTANT]
> THIS CODES ARE DEVELOPED BY[LORENCE ISIDORO](https://facebook.com/wndrOF.u)

> [!TIP]
> THIS C++ CODE HAVE A SAME CODE 
> EXAMPLE : 
> they have the same code, they use Zeller's Congruence Algorithm, the only difference is in the if, else statement, just added a switch statement which is the months.

<b>CALENDAR USING C++</b>
<p>Zeller's Congruence Algorithm</p>
<p>if, else statement</p>
<p>Basic C++ Project</p>

[Click here to view the Calendar if, else statement.docs](https://docs.google.com/document/d/1TAqKsfjHH92BXO5hVEdEwcBDiYE2leo0YuhfwF2ueFY/edit?usp=sharing)

```c++
int DAYSINMONTH(int month, int year) {
  if (month == 4 || month == 6 || month == 9 || month == 11) {
    return 30;
  } else if (month == 2) {
    return ISLEAPYEAR(year) ? 29 : 28;
  } else {
    return 31;
  }
}

int DAYSOFYEAR(int year, int month, int day) {

  int DAYSINMONTH[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  year -= month < 3;
  return (year + year / 4 - year / 100 + year / 400 + DAYSINMONTH[month - 1] + day) % 7;
}
```

![Screenshot 2024-05-05 153337](https://github.com/wndrOFu/Calendar_using_C/assets/129820204/3eb2d84c-f2ea-4a96-8da0-87faef46bca7)


<b>CALENDAR USING C++</b>
<p>Zeller's Congruence Algorithm</p>
<p>if, else with Switch statement</p>
<p>Basic C++ Project</p>

[Click here to view the Calendar if, else with switch statement.docs](https://docs.google.com/document/d/1Q6hQH9IMacP5K5SZMVMq0nRex2FdoIOJ0F_hfGNmGfs/edit?usp=sharing)

```c++
int DAYSINMONTH(int month, int year) {
  switch (month) {
    case 1:
        case 3:
            case 5:
                case 7:
                    case 8:
                        case 10:
                            case 12:
      return 31;
    case 4:
        case 6:
            case 9:
                case 11:
      return 30;
    case 2:
      return ISLEAPYEAR(year) ? 29 : 28;
    default:
      return 0;
  }
}


int DAYSOFYEAR(int year, int month, int day) {

  int DAYSINMONTH[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  year -= month < 3;
  return (year + year / 4 - year / 100 + year / 400 + DAYSINMONTH[month - 1] + day) % 7;
```

![Screenshot 2024-05-05 161138](https://github.com/wndrOFu/Calendar_using_C/assets/129820204/4cc048ac-b582-4f2f-b2f1-7da4099106ae)
