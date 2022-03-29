/*
    From BlackMatter Ransomware (https://chuongdong.com/reverse%20engineering/2021/09/05/BlackMatterRansomware/)

    I will improve it later with Windows 11 and Windows Server. 
*/

INT GetOSVersion(VOID)
{
	PPEB Peb = (PPEB)GetPeb();
    	UINT OSMajorVersion = Peb->OSMajorVersion;
    	UINT OSMinorVersion = Peb->OSMinorVersion;

	if (OSMajorVersion == 5 && !OSMinorVersion || OSMajorVersion < 5)
	{
		return 0; // Windows 2000
	}
	if (OSMajorVersion == 5 && OSMinorVersion == 1)
	{
		return 0x33; // Windows XP
	}
	if (OSMajorVersion == 5 && OSMinorVersion == 2)
	{
		return 0x34; // Windows Server 2003
	}
	if (OSMajorVersion == 6 && !OSMinorVersion)
	{
		return 0x3C;// Windows Windows Vista
	}
	if (OSMajorVersion == 6 && OSMinorVersion == 1)
	{
		return 0x3D; // Windows 7
	}
	if (OSMajorVersion == 6 && OSMinorVersion == 2)
	{
		return 0x3E; // Windows 8
	}
	if (OSMajorVersion == 6 && OSMinorVersion == 3)
	{
		return 0x3F; // Windows 8.1
	}
	if (OSMajorVersion == 10 && !OSMinorVersion)
	{
		return 0x64; // Windows 10
	}
	if (OSMajorVersion == 10 && OSMinorVersion || OSMajorVersion > 10)
	{
		return 0x7FFFFFFF;
	}
	return -1;
}
