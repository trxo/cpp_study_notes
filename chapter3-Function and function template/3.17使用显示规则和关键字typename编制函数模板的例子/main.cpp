#include <iostream>


using namespace std;
template <typename T>
T max_(T m1, T m2){
    return m1 > m2 ? m1 : m2;
}
template <typename T>  //必须重写
T min_(T m1, T m2){
    return m1 < m2 ? m1 : m2;
}

int main()
{
    cout << max_("ABC","ABD") << "," <<min_("ABC","ABD") << "," 
    << min_('W','T') << "," << min_(2.0,5.) << "\t" << min_ <double> (8.5,6) << "," << max_ ((int)8.5,6);
    cout << "\t" << min_(2.3,5.8) << "," << max_<int>('a','y') << "," << max_<char>(95,121) << endl;

}