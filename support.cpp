int execute(int rL, std::string script){

    std::string str = script;
    std::string oldStr = "game:HttpGet";
    std::string newStr = "HttpGet";
    
    size_t pos = str.find(oldStr);
    if (pos != std::string::npos) { 
        str.replace(pos, oldStr.length(), newStr); 
    }
   
    str.clear();
  
    //execute new string called 'str'
}
