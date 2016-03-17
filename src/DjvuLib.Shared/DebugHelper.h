void printDebugMessage(int lineNumber, LPCWSTR functionName, LPCWSTR fileName, LPCWSTR format, ...);

#if _DEBUG || ENABLE_DBGPRINT
#define DBGPRINT(format, ...) printDebugMessage(__LINE__, __FUNCTIONW__, __FILEW__, format, __VA_ARGS__)
#else
#define DBGPRINT(format, ...)
#endif