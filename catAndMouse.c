char* catAndMouse(int x, int y, int z) {
    int d1 = abs(z-x);
    int d2 = abs(z-y);
    
    if(d1<d2){
        return "Cat A";
    } else if(d1>d2){
        return "Cat B";
    } else {
        return "Mouse C";
    }

}
