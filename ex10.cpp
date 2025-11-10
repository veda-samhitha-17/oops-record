#include &lt;iostream&gt;
using namespace std;
class Number {
int x, y;
public:
void getData(int a, int b) {
x = a; y = b;
}
void operator++() { // Unary operator overloading
++x;
++y;
}
void display() {
cout &lt;&lt; &quot;x = &quot; &lt;&lt; x &lt;&lt; &quot;, y = &quot; &lt;&lt; y &lt;&lt; endl;
}
};
int main() {
Number n;
n.getData(5, 10);
cout &lt;&lt; &quot;Before increment: &quot;;
n.display();
++n; // Calls overloaded operator
cout &lt;&lt; &quot;After increment: &quot;;
n.display();
return 0;
}