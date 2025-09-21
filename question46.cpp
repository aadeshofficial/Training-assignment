#include <iostream>

int main() {
    int n;
    std::cout << "Enter odd size: ";
    std::cin >> n; 
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            bool star = false;
            if (i == 1 && j >= mid) star = true;        
            if (i == mid) star = true;                    
            if (i == n && j <= mid) star = true;            
            if (j == 1 && i >= mid) star = true;           
            if (j == mid) star = true;                    
            if (j == n && i <= mid) star = true;          
            std::cout << (star ? "* " : "  ");
        }
        std::cout << std::endl;
    }
    return 0;
}