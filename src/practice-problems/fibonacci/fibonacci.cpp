 #include <iostream>
 
void fibonacci( const long long int& user_input) {
    auto n = 0; // treat n as your index
    long long int n1 = 1;
    long long int n2 = 1;
    long long int fib = 0;

    while ( n < user_input ) {
        if ( n > 1 ) {
           fib = n1 + n2;
           n2 = n1;
           n1 = fib;
        } else {
            fib = fib + n;
        }
        ++n;
        std::cout << fib << '\n';
    };
}

int main () {
    long long int user_input = -1; // default to -1
    std::cout << "Please enter the number of fibonacci numbers you would like to display: " ;
    std::cin >> user_input;

    /// Check user input to see if valid integer.
    if ( std::cin.good() ) {
         fibonacci( user_input );
     } else {
        std::cout << "Input was not a correct number. Program is leaving. Good-bye.\n";
     }
 
     return 0;
}
