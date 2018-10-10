#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int number1, number2, number3, number4;

    ofstream fout;

    fout.open("rectline.svg");
    if (fout.fail())
    {
        cout << "Could not open file.";
    }
    do
    {
        cout << "Please enter 4 numbers separated by spaces.\n";
        cin >> number1 >> number2 >> number3 >> number4;
        if (number1 < 0 || number2 < 0 || number3 < 0 || number4 < 0)
        {
            cout << "Please enter a non-negative number.\n";
        }
    }
    while (number1 < 0 || number2 < 0 || number3 < 0 || number4 < 0);
    fout << "<?xml version=\"1.0\" standalone=\"no\"?>\n"
     << "<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\"\n"
     << "\"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n"
     << "<svg width=\"500\" height=\"500\"\n"
     << "xmlns=\"http://www.w3.org/2000/svg\">\n";

// This creates the bars.
fout << "<rect x=\"" << 30 <<"\" y=\"" << 300-number1 << "\" width=\"" << 25
     << "\" height=\"" << number1 << "\" style=\"fill:black;\"/>\n"
     << "<rect x=\"" << 80 << "\" y=\"" << 300-number2 << "\" width=\"" << 25
     << "\" height=\"" << number2 << "\" style=\"fill:black;\"/>\n"
     << "<rect x=\"" << 130 <<"\" y=\"" << 300-number3 << "\" width=\"" << 25
     << "\" height=\"" << number3 << "\" style=\"fill:black;\"/>\n"
     << "<rect x=\"" << 180 << "\" y=\"" << 300-number4 << "\" width=\"" << 25
     << "\" height=\"" << number4 << "\" style=\"fill:black;\"/>\n";

// This creates the lines.
fout << "<line x1=\"" << 20 << "\" y1=\"" << 0 << "\" x2=\"" << 20 << "\" y2=\"" << 300
     << "\" style=\"stroke:black;stroke-width:2\"/>" << endl
     << "<line x1=\"" << 20 << "\" y1=\"" << 300 << "\" x2=\"" << 250 << "\" y2=\"" << 300
     << "\" style=\"stroke:black;stroke-width:2\"/>" << endl;

fout << "</svg>" << endl;

fout.close();
    return 0;
}
