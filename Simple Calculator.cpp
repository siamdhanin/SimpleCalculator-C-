//Siamdhani Nurcahyo
//1801440162s
using namespace std;
int main()
{
    char o;
    float num1,num2;
    cout << "Enter operator either + or - or * or /: ";
    cin >> o;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    switch(o) {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/':
            cout << num1/num2;
            break;
        default:
            /* If operator is other than +, -, * or /, error message is shown */
            cout << "Error! operator is not correct";
            break;
    }
    return 0;
}