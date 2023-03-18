#ifndef GUARD_DIPARTIMENTOTREND_H
#define GUARD_DIPARTIMENTOTREND_H

void InitDipartimentoTrend(void);
void UpdateDipartimentoTrendPerDay(u16 days);
bool8 TrySetTrendyPhrase(u16 *phrase);
void ReceiveDipartimentoTrendData(struct DipartimentoTrend *linkedTrends, size_t size, u8 unused);


#endif // GUARD_DIPARTIMENTOTREND_H
