class ParkingSystem {
int arr[4];
public:
    ParkingSystem(int big, int medium, int small) {
        this->arr[1]=big;
        this->arr[2]=medium;
        this->arr[3]=small;
    }
    
    bool addCar(int carType) {
        if(arr[carType]<=0)return false;
        arr[carType]-=1;
        return true;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */