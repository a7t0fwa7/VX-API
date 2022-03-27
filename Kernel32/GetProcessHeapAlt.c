// Author: 3xp0rt

HANDLE GetProcessHeapAlt(VOID)
{
	PPEB Peb = (PPEB)GetPeb();

	return (HANDLE)Peb->ProcessHeap;
}
