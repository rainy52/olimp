#include <iostream>
using namespace std;

int main() {
    // x - ����� ��� ��������, d - ������� ����� ����� ������ �����, ����� x � n - ���� �� �������
    // t - �������� ��������� ���� � �� x, m - ������� �� �������� ���� ����

    int n, m, x, t, d, f_height;
    cin >> n >> m >> x >> t >> d;

    f_height = t - d*(x-1);

    if (m > x && m < n) {
        cout << t;
    }
    else if (0 <= m && m <= x) {
        cout << f_height + d*(m-1);
    }
}
