// #include<bits/stdc++.h>
// using namespace std;
// class player{   // we need to usse a public keyword to use the data
// public :        // default :: private
//     int x,y;
//     int speed;
//     void move(int xa,int ya){
//         x += xa*ya;
//         y -= xa*ya;
//     }
// };
// struct Player{      // not need to use a public keyword to access data from struct
//     int x,y;        // default :: public
//     int speed;
//     void move(int xa,int ya){
//         x += xa*ya;
//         y -= xa*ya;
//     }
// };
// int main(){
//     Player p1;
//     p1.move(1,-1);

// }
// #include <bits/stdc++.h>
// using namespace std;
// class Log
// {
// private:
//     int m_loglevel = loglevelinfo;

// public:
//     const int loglevelerror = 0;
//     const int loglevelwarning = 1;
//     const int loglevelinfo = 2;

//     void loglevel(int level)
//     {
//         m_loglevel = level;
//     }

//     void info(const char* message)
//     {
//         if (m_loglevel >= loglevelinfo)
//             cout << "[INFO]:" << message << endl;
//     }

//     void error(const char* message)
//     {
//         if (m_loglevel >= loglevelerror)
//             cout << "[ERROR]:" << message << endl;
//     }

//     void warn(const char* message)
//     {
//         if (m_loglevel >= loglevelwarning)
//             cout << "[WARNING]:" << message << endl;
//     }
// };
//     int main()
// {
//     Log l1;
//     l1.loglevel(l1.loglevelwarning);
//     l1.error("hello");
//     l1.info("correct it ");
//     l1.warn("hello");
//     l1.loglevel(l1.loglevelinfo);
// }






// #include<bits/stdc++.h>
// #include <iostream>
// #include <fstream>
// #include <string>
// #include<mutex>
// #include <chrono>
// #include <ctime>

// class Logger {
// public:
//     enum Level { ERROR = 0, WARNING, INFO, DEBUG, TRACE };

//     static Logger& getInstance() {
//         static Logger instance;
//         return instance;
//     }

//     void setLevel(Level level) {
//         logLevel = level;
//     }

//     void setFile(const std::string& filename) {
//         logfile.open(filename, std::ios::out | std::ios::app);
//     }

//     void log(Level level, const std::string& message) {
//         if (level <= logLevel) {
//             std::lock_guard<std::mutex> lock(mu);
//             std::string output = timestamp() + " " + levelToString(level) + ": " + message;

//             // Console output
//             std::cout << output << std::endl;

//             // File output (if enabled)
//             if (logfile.is_open()) {
//                 logfile << output << std::endl;
//             }
//         }
//     }

//     void error(const std::string& msg) { log(ERROR, msg); }
//     void warn(const std::string& msg)  { log(WARNING, msg); }
//     void info(const std::string& msg)  { log(INFO, msg); }
//     void debug(const std::string& msg) { log(DEBUG, msg); }
//     void trace(const std::string& msg) { log(TRACE, msg); }

// private:
//     Level logLevel = INFO;
//     std::ofstream logfile;
//     std::mutex mu;

//     Logger() {} // private constructor for singleton
//     ~Logger() { if (logfile.is_open()) logfile.close(); }

//     std::string timestamp() {
//         auto now = std::chrono::system_clock::now();
//         std::time_t t = std::chrono::system_clock::to_time_t(now);
//         char buf[30];
//         std::strftime(buf, sizeof(buf), "%Y-%m-%d %H:%M:%S", std::localtime(&t));
//         return std::string(buf);
//     }

//     std::string levelToString(Level level) {
//         switch (level) {
//             case ERROR:   return "[ERROR]";
//             case WARNING: return "[WARNING]";
//             case INFO:    return "[INFO]";
//             case DEBUG:   return "[DEBUG]";
//             case TRACE:   return "[TRACE]";
//             default:      return "[UNKNOWN]";
//         }
//     }
// };


 