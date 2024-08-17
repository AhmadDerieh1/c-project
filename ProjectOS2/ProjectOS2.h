// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the PROJECTOS2_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// PROJECTOS2_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef PROJECTOS2_EXPORTS
#define PROJECTOS2_API __declspec(dllexport)
#else
#define PROJECTOS2_API __declspec(dllimport)
#endif
extern "C" {
    PROJECTOS2_API void customSort(int* a, const int size);
    PROJECTOS2_API void readInfo(int* a, const int size);
    PROJECTOS2_API void display(const int* a, const int size);
    PROJECTOS2_API double computeAvg(const int* a, const int size);
}
// This class is exported from the dll
class PROJECTOS2_API CProjectOS2 {
public:
	CProjectOS2(void);
	// TODO: add your methods here.
};
extern PROJECTOS2_API int nProjectOS2;
PROJECTOS2_API int fnProjectOS2(void);
