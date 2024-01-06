#import <iostream>
#import <format>

int main(){
    std::cout << "hello world\n";
    int i = 10;
    std::cout << std::format("hello {}", i);
    return 0;
}