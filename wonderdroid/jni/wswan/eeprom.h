#ifndef __WSWAN_EEPROM_H
#define __WSWAN_EEPROM_H

uint8 WSwan_EEPROMRead(uint32 A);
void WSwan_EEPROMWrite(uint32 A, uint8 V);

void WSwan_EEPROMReset(void);
void WSwan_EEPROMInit(const char *Name, const uint16 BYear, const uint8 BMonth, const uint8 BDay, const uint8 Sex, const uint8 Blood);

#endif
