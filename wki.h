#include <Windows.h>
#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;
#include <map>;

enum KeyBoardCode {
	VKBACK = 8,
	VKTAB = 9,
	VKRETURN = 13,
	VKSHIFT = 16,
	VKCONTROL = 17,
	VKMENU = 18,
	VKPAUSE = 19,
	VKCAPITAL = 20,
	VKESCAPE = 27,
	VKSPACE = 32,
	VKPRIOR = 33,
	VKNEXT = 34,
	VKEND = 35,
	VKHOME = 36,
	VKLEFT = 37,
	VKUP = 38,
	VKRIGHT = 39,
	VKDOWN = 40,
	VKSELECT = 41,
	VKPRINT = 42,
	VKEXECUTE = 43,
	VKSNAPSHOT = 44,
	VKINSERT = 45,
	VKDELETE = 46,
	VKHELP = 47,
	VK0 = 48,
	VK1 = 49,
	VK2 = 50,
	VK3 = 51,
	VK4 = 52,
	VK5 = 53,
	VK6 = 54,
	VK7 = 55,
	VK8 = 56,
	VK9 = 57,
	VKA = 65,
	VKB = 66,
	VKC = 67,
	VKD = 68,
	VKE = 69,
	VKF = 70,
	VKG = 71,
	VKH = 72,
	VKI = 73,
	VKJ = 74,
	VKK = 75,
	VKL = 76,
	VKM = 77,
	VKN = 78,
	VKO = 79,
	VKP = 80,
	VKQ = 81,
	VKR = 82,
	VKS = 83,
	VKT = 84,
	VKU = 85,
	VKV = 86,
	VKW = 87,
	VKX = 88,
	VKY = 89,
	VKZ = 90,
	VKLWIN = 91,
	VKRWIN = 92,
	VKAPPS = 93,
	VKSLEEP = 95,
	VKNUMPAD0 = 96,
	VKNUMPAD1 = 97,
	VKNUMPAD2 = 98,
	VKNUMPAD3 = 99,
	VKNUMPAD4 = 100,
	VKNUMPAD5 = 101,
	VKNUMPAD6 = 102,
	VKNUMPAD7 = 103,
	VKNUMPAD8 = 104,
	VKNUMPAD9 = 105,
	VKMULTIPLY = 106,
	VKADD = 107,
	VKSEPARATOR = 108,
	VKSUBSTRACT = 109,
	VKDECIMAL = 110,
	VKDIVIDE = 111,
	VKF1 = 12,
	VKF2 = 113,
	VKF3 = 114,
	VKF4 = 115,
	VKF5 = 116,
	VKF6 = 117,
	VKF7 = 118,
	VKF8 = 119,
	VKF9 = 120,
	VKF10 = 121,
	VKF11 = 122,
	VKF12 = 123,
	VKF13 = 124,
	VKF14 = 125,
	VKF15 = 126,
	VKF16 = 127,
	VKF17 = 128,
	VKF18 = 129,
	VKF19 = 130,
	VKF20 = 131,
	VKF21 = 132,
	VKF22 = 133,
	VKF23 = 134,
	VKF24 = 135,
	VKNUMLOCK = 144,
	VKSCROLL = 145,
	VKLSHIFT = 160,
	VKRSHIFT = 161,
	VKLCONTROL = 162,
	VKRCONTROL = 163,
	VKLMENU = 164,
	VKRMENU = 165,
	VKVOLUMEMUTE = 173,
	VKVOLUMEDOWN = 174,
	VKVOLUMEUP = 175,
	VKOEM1 = 186,
	VKOEMPLUS = 187,
	VKOEMCOMMA = 188,
	VKOEMMINUS = 189,
	VKOEMPERIOD = 190,
	VKOEM2 = 191,
	VKOEM3 = 192,
	VKOEM4 = 219,
	VKOEM5 = 220,
	VKOEM6 = 221,
	VKOEM7 = 222,
};

void Virtual_Keyboard()
{
	cout<<"VKBACK       Backspace         8"<<endl;
	cout<<"VKTAB        Tab               9"<<endl;
	cout<<"VKRETURN     Enter             13"<<endl;
	cout<<"VKSHIFT      Shift             16"<<endl;
	cout<<"VKCONTROL    Ctrl              17"<<endl;
	cout<<"VKMENU       Alt               18"<<endl;
	cout<<"VKPAUSE      Pause             19"<<endl;
	cout<<"VKCAPITAL    Caps Lock         20"<<endl;
	cout<<"VKESCAPE     Esc               27"<<endl;
	cout<<"VKSPACE      Space             32"<<endl;
	cout<<"VKPRIOR      Page Up           33"<<endl;
	cout<<"VKNEXT       Page Down         34"<<endl;
	cout<<"VKEND        End               35"<<endl;
	cout<<"VKHOME       Home              36"<<endl;
	cout<<"VKLEFT       ←                37"<<endl;
	cout<<"VKUP         ↑                38"<<endl;
	cout<<"VKRIGHT      →                39"<<endl;
	cout<<"VKDOWN       ↓                40"<<endl;
	cout<<"VKSELECT     Select            41"<<endl;
	cout<<"VKPRINT      Print             42"<<endl;
	cout<<"VKEXECUTE    Execute           43"<<endl;
	cout<<"VKSNAPSHOT   Print Screen      44"<<endl;
	cout<<"VKINSERT     Ins               45"<<endl;
	cout<<"VKDELETE     Del               46"<<endl;
	cout<<"VKHELP       Help              47"<<endl;
	cout<<"VK0          0                 48"<<endl;
	cout<<"VK1          1                 49"<<endl;
	cout<<"VK2          2                 50"<<endl;
	cout<<"VK3          3                 51"<<endl;
	cout<<"VK4          4                 52"<<endl;
	cout<<"VK5          5                 53"<<endl;
	cout<<"VK6          6                 54"<<endl;
	cout<<"VK7          7                 55"<<endl;
	cout<<"VK8          8                 56"<<endl;
	cout<<"VK9          9                 57"<<endl;
	cout<<"VKA          a                 65"<<endl;
	cout<<"VKB          b                 66"<<endl;
	cout<<"VKC          c                 67"<<endl;
	cout<<"VKD          d                 68"<<endl;
	cout<<"VKE          e                 69"<<endl;
	cout<<"VKF          f                 70"<<endl;
	cout<<"VKG          g                 71"<<endl;
	cout<<"VKH          h                 72"<<endl;
	cout<<"VKI          i                 73"<<endl;
	cout<<"VKJ          j                 74"<<endl;
	cout<<"VKK          k                 75"<<endl;
	cout<<"VKL          l                 76"<<endl;
	cout<<"VKM          m                 77"<<endl;
	cout<<"VKN          n                 78"<<endl;
	cout<<"VKO          o                 79"<<endl;
	cout<<"VKP          p                 80"<<endl;
	cout<<"VKQ          q                 81"<<endl;
	cout<<"VKR          r                 82"<<endl;
	cout<<"VKS          s                 83"<<endl;
	cout<<"VKT          t                 84"<<endl;
	cout<<"VKU          u                 85"<<endl;
	cout<<"VKV          v                 86"<<endl;
	cout<<"VKW          w                 87"<<endl;
	cout<<"VKX          x                 88"<<endl;
	cout<<"VKY          y                 89"<<endl;
	cout<<"VKZ          z                 90"<<endl;
	cout<<"VKLWIN       Left Windows	91"<<endl;
	cout<<"VKRWIN       Right Windows	92"<<endl;
	cout<<"VKAPPS       Apps Key          93"<<endl;
	cout<<"VKSLEEP      Sleep             95"<<endl;
	cout<<"VKNUMPAD0    Numpad 0          96"<<endl;
	cout<<"VKNUMPAD1    Numpad 1          97"<<endl;
	cout<<"VKNUMPAD2    Numpad 2          98"<<endl;
	cout<<"VKNUMPAD3    Numpad 3          99"<<endl;
	cout<<"VKNUMPAD4    Numpad 4          100"<<endl;
	cout<<"VKNUMPAD5    Numpad 5          101"<<endl;
	cout<<"VKNUMPAD6    Numpad 6          102"<<endl;
	cout<<"VKNUMPAD7    Numpad 7          103"<<endl;
	cout<<"VKNUMPAD8    Numpad 8          104"<<endl;
	cout<<"VKNUMPAD9    Numpad 9          105"<<endl;
	cout<<"VKMULTIPLY   Multiply          106"<<endl;
	cout<<"VKADD        Add               107"<<endl;
	cout<<"VKSEPARATOR  Separator         108"<<endl;
	cout<<"VKSUBSTRACT  Subtract          109"<<endl;
	cout<<"VKDECIMAL    Decimal Point     110"<<endl;
	cout<<"VKDIVIDE     Divide            111"<<endl;
	cout<<"VKF1         F1                112"<<endl;
	cout<<"VKF2         F2                113"<<endl;
	cout<<"VKF3         F3                114"<<endl;
	cout<<"VKF4         F4                115"<<endl;
	cout<<"VKF5         F5                116"<<endl;
	cout<<"VKF6         F6                117"<<endl;
	cout<<"VKF7         F7                118"<<endl;
	cout<<"VKF8         F8                119"<<endl;
	cout<<"VKF9         F9                120"<<endl;
	cout<<"VKF10        F10               121"<<endl;
	cout<<"VKF11        F11               122"<<endl;
	cout<<"VKF12        F12               123"<<endl;
	cout<<"VKF13        F13               124"<<endl;
	cout<<"VKF14        F14               125"<<endl;
	cout<<"VKF15        F15               126"<<endl;
	cout<<"VKF16        F16               127"<<endl;
	cout<<"VKF17        F17               128"<<endl;
	cout<<"VKF18        F18               129"<<endl;
	cout<<"VKF19        F19               130"<<endl;
	cout<<"VKF20        F20               131"<<endl;
	cout<<"VKF21        F21               132"<<endl;
	cout<<"VKF22        F22               133"<<endl;
	cout<<"VKF23        F23               134"<<endl;
	cout<<"VKF24        F24               135"<<endl;
	cout<<"VKNUMLOCK    Num Lock          144"<<endl;
	cout<<"VKSCROLL     Scroll Lock       145"<<endl;
	cout<<"VKLSHIFT     Left Shift        160"<<endl;
	cout<<"VKRSHIFT     Right Shift       161"<<endl;
	cout<<"VKLCONTROL   Left Ctrl         162"<<endl;
	cout<<"VKRCONTROL   Right Ctrl        163"<<endl;
	cout<<"VKLMENU      Left Alt          164"<<endl;
	cout<<"VKRMENU      Right Alt         165"<<endl;
	cout<<"VKVOLUMEMUTE VolumeMute        173"<<endl;
	cout<<"VKVOLUMEDOWN VolumeDown        174"<<endl;
	cout<<"VKVOLUMEUP   VolumeUp          175"<<endl;
	cout<<"VKOEM1       ; :               186"<<endl;
	cout<<"VKOEMPLUS    = +               187"<<endl;
	cout<<"VKOEMCOMMA   ,                 188"<<endl;
	cout<<"VKOEMMINUS   - _               189"<<endl;
	cout<<"VKOEMPERIOD  .                 190"<<endl;
	cout<<"VKOEM2       / ?               191"<<endl;
	cout<<"VKOEM3       ` ~               192"<<endl;
	cout<<"VKOEM4       [ {               219"<<endl;
	cout<<"VKOEM5       \ |               220"<<endl;
	cout<<"VKOEM6       ] }               221"<<endl;
	cout<<"VKOEM7       ' \"              222"<<endl;
}

void help()
{
	cout <<"usage sample: KM.exe [-h]"<<endl;
	cout <<"              KM.exe [-mv=300,500]"<<endl;
	cout <<"              KM.exe [-mc=right]"<<endl;
	cout <<"              KM.exe [-kd=56]"<<endl;
	cout <<"              KM.exe [-ku=56]"<<endl;
	cout <<"-h,           show this help message and exit"<<endl;
	cout <<"-vk,          show virtual keyboard list"<<endl;
	cout <<"-mv,          mouse move absolutely point"<<endl;
	cout <<"-mc,          mouse click{right,left}"<<endl;
	cout <<"-kp,          key board press"<<endl;
	cout <<"-kd,          key board down"<<endl;
	cout <<"-ku           key board up"<<endl;
}


std::vector<std::string> split(std::string str,std::string pattern)
{
  std::string::size_type pos;
  std::vector<std::string> result;
  str+=pattern;
  int size=str.size();
  for(int i=0; i<size; i++)
  {
    pos=str.find(pattern,i);
    if(pos<size)
    {
      std::string s=str.substr(i,pos-i);
      result.push_back(s);
      i=pos+pattern.size()-1;
    }
  }
  return result;
}

//void MouseSetup(INPUT *buffer)
//{
//	SCREEN_WIDTH = GetSystemMetrics(SM_CXFULLSCREEN);
//	SCREEN_HEIGHT = GetSystemMetrics(SM_CYFULLSCREEN);
//  buffer->type = INPUT_MOUSE;
//  buffer->mi.dx = (0 * (0xFFFF / SCREEN_WIDTH));
//  buffer->mi.dy = (0 * (0xFFFF / SCREEN_HEIGHT));
//  buffer->mi.mouseData = 0;
//  buffer->mi.dwFlags = MOUSEEVENTF_ABSOLUTE;
//  buffer->mi.time = 0;
//  buffer->mi.dwExtraInfo = 0;
//}


void MouseMoveAbsolute(long x ,long y)
{
	//int width = GetSystemMetrics(SM_CXSCREEN);
	//int height = GetSystemMetrics(SM_CYSCREEN);
	//cout << width << height<<endl;
	SetCursorPos(x,y);
	//mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_MOVE,x * 65535 , y * 65535 , 0, 0 );
}

void MouseClictRight()
{
	mouse_event(MOUSEEVENTF_RIGHTDOWN | MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0 );
}

void MouseClictLeft(){
	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0 );
}


void KeyBoardDown(int vk)
{
	keybd_event(vk,0,0,0);
	Sleep(200);
}

void KeyBoardUp(int vk)
{
	keybd_event(vk,0,2,0);
}

void KeyBoardPress(int vk)
{
	KeyBoardDown(vk);
	KeyBoardUp(vk);
}


int main(int argc,char *argv[])
{
	int i;
	string keys;string values;string x;string y;
	vector<string> ret;
	vector<string> coordinate;
	for (i = 1; i < argc; i++)
	{
		ret =split(argv[i],"=");
		keys = ret[0];
		values = ret[1];
		if (keys =="-mv"){
			coordinate = split(values,",");
			x = coordinate[0];
			y = coordinate[1];
			MouseMoveAbsolute(atoi(x.c_str()),atoi(y.c_str()));
		}
		if (keys =="-mc"){
			if(values =="right"){
				MouseClictRight();
			}
			if(values =="left"){
				MouseClictLeft();
			}
		}
		if (keys =="-ku"){KeyBoardDown(atoi(values.c_str()));}
		if (keys =="-kd"){KeyBoardUp(atoi(values.c_str()));}
		if (keys =="-kp"){KeyBoardPress(atoi(values.c_str()));}
		if (keys =="-h"){help();}
		if (keys =="-vk"){Virtual_Keyboard();}
	}
	return 0;  
} 
