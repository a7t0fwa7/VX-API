/*
Language codes: https://docs.microsoft.com/en-us/openspecs/office_standards/ms-oe376/6c085406-a698-4e12-9d4d-c3b0ee3dbc4a

Author: 3xp0rt
*/

LCID GetCurrentLocale(VOID)
{
	PTEB Teb = (PTEB)GetTeb();

	return (LCID)Teb->CurrentLocale;
}
