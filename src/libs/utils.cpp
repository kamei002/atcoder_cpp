// よく使いそうな処理。
#include <algorithm>
#include <vector>
// #include <string>
// #include <iostream>

// 存在チェック
bool exists(std::vector<int> vec, int target){
    return std::find(vec.begin(), vec.end(), target) != vec.end();
}

// 環境変数をstringで取得
getStrEnv(char* key){
  char const* tmp = getenv(key);
  if(tmp == NULL) return "";
  std::string str_env(tmp);
  return str_env;
}