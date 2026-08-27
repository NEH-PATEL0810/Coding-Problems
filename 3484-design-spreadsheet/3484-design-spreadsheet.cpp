class Spreadsheet {
public:
    unordered_map<string,int> cells;
    Spreadsheet(int rows) {
        
    }
    
    void setCell(string cell, int value) {
        cells[cell] = value;
    }
    
    void resetCell(string cell) {
        cells[cell] = 0;
    }
    
    int getValue(string formula) {
        formula = formula.substr(1);

        int pos = formula.find('+');

        string left = formula.substr(0,pos);
        string right = formula.substr(pos+1);

        int leftVal;
        int rightVal;

        if(isdigit(left[0])){
            leftVal = stoi(left);
        }
        else{
            leftVal = cells[left];
        }

        if(isdigit(right[0])){
            rightVal = stoi(right);
        }
        else{
            rightVal = cells[right];
        }

        return leftVal + rightVal;
    }
};

/**
 * Your Spreadsheet object will be instantiated and called as such:
 * Spreadsheet* obj = new Spreadsheet(rows);
 * obj->setCell(cell,value);
 * obj->resetCell(cell);
 * int param_3 = obj->getValue(formula);
 */