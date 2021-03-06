//
//  NTSDateOnly.h
//
//  Created by Kevin Hoctor on 11/25/09.
//  Copyright 2010 No Thirst Software LLC
//
//  Use of this code is freely permitted with no guarantees of it being bug free.
//  Simply include Kevin Hoctor in your credits if you utilize it.
//

@class NTSYearMonth;

@interface NTSDateOnly : NSObject <NSCopying> {
	NSUInteger dateYMD;
}

+ (NSCalendar *)currentCalendar;
+ (NTSDateOnly *)today;
+ (NTSDateOnly *)tomorrow;
+ (NTSDateOnly *)yesterday;
+ (NTSDateOnly *)startOfWeekDate:(NTSDateOnly *)aDate;
+ (NTSDateOnly *)startOfMonthDate:(NTSDateOnly *)aDate;
+ (NTSDateOnly *)startOfYearDate:(NTSDateOnly *)aDate;
+ (NTSDateOnly *)startOfPreviousYearDate:(NTSDateOnly *)aDate;
+ (NTSDateOnly *)endOfWeekDate:(NTSDateOnly *)aDate;
+ (NTSDateOnly *)endOfMonthDate:(NTSDateOnly *)aDate;
+ (NTSDateOnly *)endOfYearDate:(NTSDateOnly *)aDate;
+ (NTSDateOnly *)dateWithNumber:(NSNumber *)aNumber;
+ (NTSDateOnly *)dateOnlyWithDate:(NSDate *)aDate;

- (const char *)objCType;
- (const char *)UTF8String;
- (unsigned int)unsignedIntValue;
- (unsigned int)intValue;
- (long long)longLongValue;

- (id)initWithDate:(NSDate *)aDate;
- (id)initWithYearMonth:(NTSYearMonth *)aYearMonth;
- (id)initWithDay:(NSInteger)aDay;
- (id)initWithMonth:(NSInteger)aMonth day:(NSInteger)aDay;
- (id)initWithYear:(NSInteger)aYear month:(NSInteger)aMonth;
- (id)initWithYear:(NSInteger)aYear month:(NSInteger)aMonth day:(NSInteger)aDay;
- (id)initWithNumber:(NSNumber *)aNumber;
- (id)initWithDateYMD:(NSUInteger)aDateYMD;

- (NSInteger)year;
- (NSInteger)month;
- (NSInteger)day;
- (NSInteger)dayOfTheWeek; //Sunday is 1
- (NSDate *)dateValue;
- (NSNumber *)numberValue;

- (NSComparisonResult)compare:(NTSDateOnly *)other;
- (BOOL)isEqualTo:(NTSDateOnly *)aDate;
- (BOOL)isLessThan:(NTSDateOnly *)aDate;
- (BOOL)isLessThanOrEqualTo:(NTSDateOnly *)aDate;
- (BOOL)isGreaterThan:(NTSDateOnly *)aDate;
- (BOOL)isGreaterThanOrEqualTo:(NTSDateOnly *)aDate;

- (NTSDateOnly *)dateByAddingDays:(NSInteger)days;
- (NTSDateOnly *)dateByAddingWeeks:(NSInteger)weeks;
- (NTSDateOnly *)dateByAddingMonths:(NSInteger)months;
- (NTSDateOnly *)dateByAddingYears:(NSInteger)years;

- (NSInteger)timeIntervalInDaysSinceDate:(NTSDateOnly *)referenceDate;

- (NSString *)label;

@property (assign) NSUInteger dateYMD;

@end
