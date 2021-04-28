void print_line(int qty, char fill_char){
    std::cout << fill_char;
    for (int i = 0; i <= qty; i++)
    {
        std::cout << "-";
    }
}

void headerPrint(int width, std::string title) {
    int total_width = ((width - title.size()) - 2);
    std::cout << "+";
    print_line(total_width/2, *"-");
    std::cout << " " << title << " ";
    print_line(total_width/2, *"-");
    std::cout << "+";
    std::cout << std::endl;
}

void footerPrint (int width) {
    std::cout << "+";
    print_line(width, *"-");
    std::cout << "+";
    std::cout << std::endl;
}

void addItem(std::string *itemList) {

}

void deleteItem() {

}

void editTem(   ) {

}

void printItems(std::string items[]) {
    std::cout << sizeof(items) << std::endl;
    // for (int i = 0; i < (sizeof(items) / 32); i++)
    // {
    //     std::cout << i << " - " << items[i] << std::endl;
    // }
    
}