
#include<iostream>
#include<string>
#include<vector>
#include<time.h>
using namespace std;


class Sudoku
{
public:
	//vector<int>s{ 0,7,2,3,0,4,8,1,9,0,0,4,0,8,9,0,0,6,9,0,0,1,0,0,2,5,4,7,0,1,9,0,0,0,0,0,0,0,0,0,0,2,8,0,7,0,9,5,0,7,0,0,1,2,4,0,5,2,3,7,0,0,0,0,0,1,0,0,0,0,2,5,6,2,0,5,0,1,7,0,0 };
	vector<int>s{ 5,3,0,0,7,0,0,0,0,6,0,0,1,9,5,0,0,0,0,9,8,0,0,0,0,6,0,8,0,0,0,6,0,0,0,3,4,0,0,8,0,3,0,0,1,7,0,0,0,2,0,0,0,6,0,6,0,0,0,0,2,8,0,0,0,0,4,1,9,0,0,5,0,0,0,0,8,0,0,7,9 };//5
	vector<int>constPos;
	void Print()
	{
		for (size_t i = 0; i < s.size(); i++)
		{
			cout << s[i] << " ";
			if (i == 2 || i == 5 || i == 11 || i == 14 || i == 29 || i == 32 || i == 38 || i == 41 || i == 47 || i == 50 || i == 56 || i == 59 || i == 65 || i == 68 || i == 74 || i == 77 || i == 20 || i == 23)

				cout << "\t";

			if (i == 8 || i == 17 || i == 35 || i == 44 || i == 62 || i == 71)

				cout << endl;

			if (i == 26 || i == 53)
				cout << endl << endl;


		}
		cout << endl << endl;
	}
	void ConstPos()
	{
		this->constPos.clear();
		for (size_t i = 0; i < s.size(); i++)
		{
			if (s[i] != 0)
			{
				this->constPos.push_back(i);
			}
		}
	}
	void Print_constPos()
	{
		for (size_t i = 0; i < this->constPos.size(); i++)
		{
			cout << this->constPos[i] << " ";
		}
	}
	bool is_empty(int index)
	{
		for (size_t i = 0; i < constPos.size(); i++)
		{
			if (constPos[i] == index)
				return false;
		}
		return true;
	}
	bool is_true_pos(int i)
	{

		switch (i)
		{
		case 0:
		{
			return (s[i] == s[1] || s[i] == s[2] || s[i] == s[3] || s[i] == s[4] || s[i] == s[5] || s[i] == s[6] || s[i] == s[7] || s[i] == s[8]
				|| s[i] == s[9] || s[i] == s[18] || s[i] == s[27] || s[i] == s[36] || s[i] == s[45] || s[i] == s[54] || s[i] == s[63] || s[i] == s[72]
				|| s[i] == s[10] || s[i] == s[11] || s[i] == s[19] || s[i] == s[20]) ? true : false;
			break;
		}
		case 1:
		{
			return (s[i] == s[0] || s[i] == s[2] || s[i] == s[3] || s[i] == s[4] || s[i] == s[5] || s[i] == s[6] || s[i] == s[7] || s[i] == s[8]
				|| s[i] == s[10] || s[i] == s[19] || s[i] == s[28] || s[i] == s[37] || s[i] == s[46] || s[i] == s[55] || s[i] == s[64] || s[i] == s[73]
				|| s[i] == s[9] || s[i] == s[18] || s[i] == s[11] || s[i] == s[20]) ? true : false;
			break;
		}
		case 2:
		{
			return (s[i] == s[0] || s[i] == s[1] || s[i] == s[3] || s[i] == s[4] || s[i] == s[5] || s[i] == s[6] || s[i] == s[7] || s[i] == s[8]
				|| s[i] == s[11] || s[i] == s[20] || s[i] == s[29] || s[i] == s[38] || s[i] == s[47] || s[i] == s[56] || s[i] == s[65] || s[i] == s[74]
				|| s[i] == s[9] || s[i] == s[10] || s[i] == s[18] || s[i] == s[19]) ? true : false;
			break;
		}
		case 3:
		{
			return (s[i] == s[0] || s[i] == s[1] || s[i] == s[2] || s[i] == s[4] || s[i] == s[5] || s[i] == s[6] || s[i] == s[7] || s[i] == s[8]
				|| s[i] == s[12] || s[i] == s[21] || s[i] == s[30] || s[i] == s[39] || s[i] == s[48] || s[i] == s[57] || s[i] == s[66] || s[i] == s[75]
				|| s[i] == s[13] || s[i] == s[14] || s[i] == s[22] || s[i] == s[23]) ? true : false;
			break;
		}
		case 4:
		{
			return (s[i] == s[0] || s[i] == s[1] || s[i] == s[2] || s[i] == s[3] || s[i] == s[5] || s[i] == s[6] || s[i] == s[7] || s[i] == s[8]
				|| s[i] == s[13] || s[i] == s[22] || s[i] == s[31] || s[i] == s[40] || s[i] == s[49] || s[i] == s[58] || s[i] == s[67] || s[i] == s[76]
				|| s[i] == s[12] || s[i] == s[21] || s[i] == s[14] || s[i] == s[23]) ? true : false;
			break;
		}
		case 5:
		{
			return (s[i] == s[0] || s[i] == s[1] || s[i] == s[2] || s[i] == s[3] || s[i] == s[4] || s[i] == s[6] || s[i] == s[7] || s[i] == s[8]
				|| s[i] == s[14] || s[i] == s[23] || s[i] == s[32] || s[i] == s[41] || s[i] == s[50] || s[i] == s[59] || s[i] == s[68] || s[i] == s[77]
				|| s[i] == s[12] || s[i] == s[21] || s[i] == s[13] || s[i] == s[22]) ? true : false;
			break;
		}
		case 6:
		{
			return (s[i] == s[0] || s[i] == s[1] || s[i] == s[2] || s[i] == s[3] || s[i] == s[4] || s[i] == s[5] || s[i] == s[7] || s[i] == s[8]
				|| s[i] == s[15] || s[i] == s[24] || s[i] == s[33] || s[i] == s[42] || s[i] == s[51] || s[i] == s[60] || s[i] == s[69] || s[i] == s[78]
				|| s[i] == s[16] || s[i] == s[17] || s[i] == s[25] || s[i] == s[26]) ? true : false;
			break;
		}
		case 7:
		{
			return (s[i] == s[0] || s[i] == s[1] || s[i] == s[2] || s[i] == s[3] || s[i] == s[4] || s[i] == s[5] || s[i] == s[6] || s[i] == s[8]
				|| s[i] == s[16] || s[i] == s[25] || s[i] == s[34] || s[i] == s[43] || s[i] == s[52] || s[i] == s[61] || s[i] == s[70] || s[i] == s[79]
				|| s[i] == s[15] || s[i] == s[17] || s[i] == s[24] || s[i] == s[26]) ? true : false;
			break;
		}
		case 8:
		{
			return (s[i] == s[0] || s[i] == s[1] || s[i] == s[2] || s[i] == s[3] || s[i] == s[4] || s[i] == s[5] || s[i] == s[6] || s[i] == s[7]
				|| s[i] == s[17] || s[i] == s[26] || s[i] == s[35] || s[i] == s[44] || s[i] == s[53] || s[i] == s[62] || s[i] == s[71] || s[i] == s[80]
				|| s[i] == s[15] || s[i] == s[16] || s[i] == s[24] || s[i] == s[25]) ? true : false;
			break;
		}
		case 9:
		{
			break;
		}
		case 10:
		{
			break;
		}
		case 11:
		{
			break;
		}
		case 12:
		{
			break;
		}
		case 13:
		{
			break;
		}
		case 14:
		{
			break;
		}
		case 15:
		{
			break;
		}
		case 16:
		{
			break;
		}
		case 17:
		{
			break;
		}
		case 18:
		{
			break;
		}
		case 19:
		{
			break;
		}
		case 20:
		{
			break;
		}
		case 21:
		{
			break;
		}
		case 22:
		{
			break;
		}
		case 23:
		{
			break;
		}
		case 24:
		{
			break;
		}
		case 25:
		{
			break;
		}
		case 26:
		{
			break;
		}
		case 27:
		{
			break;
		}
		case 28:
		{
			break;
		}
		case 29:
		{
			break;
		}
		case 30:
		{
			break;
		}
		case 31:
		{
			break;
		}
		case 32:
		{
			break;
		}
		case 33:
		{
			break;
		}
		case 34:
		{
			break;
		}
		case 35:
		{
			break;
		}
		case 36:
		{
			break;
		}
		case 37:
		{
			break;
		}
		case 38:
		{
			break;
		}
		case 39:
		{
			break;
		}
		case 40:
		{
			break;
		}
		case 41:
		{
			break;
		}
		case 42:
		{
			break;
		}
		case 43:
		{
			break;
		}
		case 44:
		{
			break;
		}
		case 45:
		{
			break;
		}
		case 46:
		{
			break;
		}
		case 47:
		{
			break;
		}
		case 48:
		{
			break;
		}
		case 49:
		{
			break;
		}
		case 50:
		{
			break;
		}
		case 51:
		{
			break;
		}
		case 52:
		{
			break;
		}
		case 53:
		{
			break;
		}
		case 54:
		{
			break;
		}
		case 55:
		{
			break;
		}
		case 56:
		{
			break;
		}
		case 57:
		{
			break;
		}
		case 58:
		{
			break;
		}
		case 59:
		{
			break;
		}
		case 60:
		{
			break;
		}
		case 61:
		{
			break;
		}
		case 62:
		{
			break;
		}
		case 63:
		{
			break;
		}
		case 64:
		{
			break;
		}
		case 65:
		{
			break;
		}
		case 66:
		{
			break;
		}
		case 67:
		{
			break;
		}
		case 68:
		{
			break;
		}
		case 69:
		{
			break;
		}
		case 70:
		{
			break;
		}
		case 71:
		{
			break;
		}
		case 72:
		{
			break;
		}
		case 73:
		{
			break;
		}
		case 74:
		{
			break;
		}
		case 75:
		{
			break;
		}
		case 76:
		{
			break;
		}
		case 77:
		{
			break;
		}
		case 78:
		{
			break;
		}
		case 79:
		{
			break;
		}
		case 80:
		{
			break;
		}

		default:
			break;
		}
	}
	void Answer()
	{
		int a = 3;
		if (is_empty(a))
		{
			if (s[a] >= 0 && s[a] <= 9)
			{
				s[a]++;
				if (!is_true_pos(a))
				{

				}
			}
		}

	}
};



int main()
{
	Sudoku su;
	su.Print();
	su.ConstPos();
	su.Print_constPos();
	cout << endl;
	cout << su.is_empty(2) << endl;
	cout << "is empty index [2] ? " << su.is_true_pos(2) << endl;
	su.Answer();
	su.Print();
	/*vector<int>s{ 0,7,2,3,0,4,8,1,9,0,0,4,0,8,9,0,0,6,9,0,0,1,0,0,2,5,4,7,0,1,9,0,0,0,0,0,0,0,0,0,0,2,8,0,7,0,9,5,0,7,0,0,1,2,4,0,5,2,3,7,0,0,0,0,0,1,0,0,0,0,2,5,6,2,0,5,0,1,7,0,0 };
	cout << s.size();*/
	
}
