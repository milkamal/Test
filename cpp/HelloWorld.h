#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#  ifdef MODULE_API_EXPORTS
#    define MODULE_API __declspec(dllexport)
#  else
#    define MODULE_API __declspec(dllimport)
#  endif
#else
#  define MODULE_API
#endif
MODULE_API void PrintHelloWorld();
MODULE_API void ShutdownCard();
typedef int (*DelMethodType)(int);
#ifdef __cplusplus
}
#endif
class HelloWorld {

public:
    int (*my_func_ptr)(int);
    HelloWorld();
    int DelegateMethod(int cnt);
};