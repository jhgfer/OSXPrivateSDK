//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSTimeZone;

@interface CALDate : NSObject <NSCopying, NSSecureCoding>
{
    struct _CALCDate _cdate;
    NSTimeZone *_timeZone;
    NSString *_calendarFormat;
}

+ (id)dateOnlyFromDate:(id)arg1;
+ (id)date;
+ (id)dateFromICSString:(id)arg1 timeZone:(id)arg2;
+ (id)dateFromICSDateValue:(id)arg1 timeZone:(id)arg2;
+ (id)dateFromICSDate:(id)arg1 timeZone:(id)arg2;
+ (id)dateFromIsoString:(id)arg1;
+ (id)dateWithDatePartFrom:(id)arg1 withTimePartFrom:(id)arg2 withTimeZone:(id)arg3;
+ (id)dateWithDatePartFrom:(id)arg1 withTimePartFrom:(id)arg2;
+ (id)dateWithDate:(id)arg1;
+ (id)distantPast;
+ (id)distantFuture;
+ (id)dateWithString:(id)arg1;
+ (id)dateWithString:(id)arg1 calendarFormat:(id)arg2;
+ (id)dateWithTimeIntervalSince1970:(double)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)alloc;
+ (id)dateWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
+ (id)getSizeOrderedAllDateFormatsWithoutYear;
+ (id)getSizeOrderedDateFormatsWithoutYear;
+ (id)getSizeOrderedDateFormatsWithYear;
+ (id)getSizeOrderedDateFormats;
+ (void)generateLocalizedDateTimeFormats;
+ (void)generatePreferedOrders;
+ (id)localizedOneCharacterAbbrevDayOfWeekForDay:(int)arg1;
+ (id)getICUFormatForFormatKey:(id)arg1;
- (id)description;
- (double)timeIntervalSinceNow;
- (BOOL)isEqualAsDateOnly:(id)arg1;
- (void)takeValueFrom:(id)arg1;
- (void)addYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (void)addSecondsInGMT:(long long)arg1;
- (void)roundToDay;
- (void)setTimeZone:(id)arg1 keepingLocalDate:(BOOL)arg2;
- (void)setTimeZone:(id)arg1;
- (void)years:(long long *)arg1 months:(long long *)arg2 days:(long long *)arg3 hours:(long long *)arg4 minutes:(long long *)arg5 seconds:(long long *)arg6 sinceDate:(id)arg7;
- (long long)compare:(id)arg1;
- (BOOL)isEqualToDateAsLocaltime:(id)arg1;
- (long long)offsetFromGMTForTimeZone:(id)arg1;
- (long long)offsetFromGMT;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 calendarFormat:(id)arg2;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)isoStringRepresentation;
- (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;
- (id)dateWithHour:(long long)arg1;
- (id)dateRoundedToYear;
- (id)dateRoundedToMonth;
- (id)dateRoundedToPreviousDay;
- (id)dateRoundedToNextDay;
- (id)dateRoundedToDay;
- (id)dateRoundedToHour;
- (id)dateRoundedToMinute;
- (id)dateBySubstractingDuration:(id)arg1;
- (id)dateByAddingDuration:(id)arg1;
- (BOOL)isMidnight;
- (id)dateByAddingYears:(long long)arg1 months:(long long)arg2 days:(long long)arg3 hours:(long long)arg4 minutes:(long long)arg5 seconds:(long long)arg6;
- (id)dateByAddingRawInterval:(double)arg1;
- (id)calendarFormat;
- (void)setCalendarFormat:(id)arg1;
- (id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2;
- (id)descriptionWithCalendarFormat:(id)arg1;
- (id)NSCalendarDate;
- (id)NSDateWithGMT;
- (id)NSDateWithTimeZone:(id)arg1;
- (id)NSDate;
- (BOOL)isAfterOrEqual:(id)arg1;
- (BOOL)isAfter:(id)arg1;
- (BOOL)isBeforeOrEqual:(id)arg1;
- (BOOL)isBefore:(id)arg1;
- (BOOL)isEqualToDate:(id)arg1;
- (void)getCDateInTimeZone:(struct _CALCDate *)arg1;
- (struct _CALCDate *)cdate;
- (long long)dayCountInMonth;
- (long long)secondOfMinute;
- (long long)minuteOfHour;
- (long long)hourOfDay;
- (long long)yearOfCommonEra;
- (long long)monthOfYear;
- (long long)dayOfYear;
- (long long)dayOfCommonEra;
- (long long)dayOfWeek;
- (long long)dayOfMonth;
- (long long)weekOfYear;
- (void)year:(long long *)arg1 month:(long long *)arg2 day:(long long *)arg3 dayOfWeek:(long long *)arg4 dayOfYear:(long long *)arg5 hour:(long long *)arg6 minute:(long long *)arg7 second:(long long *)arg8;
- (double)timeIntervalSinceDate:(id)arg1;
- (double)absoluteTimeInterval;
- (double)timeIntervalSince1970;
- (id)timeZone;
- (id)initWithTimeIntervalSince2001:(double)arg1;
- (id)initWithTimeIntervalSince1970:(double)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)meetComparisonCondition:(unsigned char)arg1 withDate:(id)arg2;
- (void)setYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (id)initWithYear:(long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3 hour:(unsigned long long)arg4 minute:(unsigned long long)arg5 second:(unsigned long long)arg6 timeZone:(id)arg7;
- (id)dateByRoundingToWeekdayBackward;
- (id)dateByRoundingToWeekdayForward;
- (id)dateOfPreviousDayShouldSkipWeekend:(BOOL)arg1;
- (id)dateOfNextDayShouldSkipWeekend:(BOOL)arg1;
- (BOOL)isDateOnly;
- (int)dateType;
- (id)localizedRelativeWithDateFormatKey:(id)arg1 withTimeFormatKey:(id)arg2 titlecase:(BOOL)arg3;
- (id)localizedRelativeWithDateFormatKey:(id)arg1 withTimeFormatKey:(id)arg2;
- (id)localizedRelativeWithDateFormatKey:(id)arg1 titlecase:(BOOL)arg2;
- (id)localizedRelativeWithDateFormatKey:(id)arg1;
- (id)localizedHourWithoutAMPM;
- (id)localizedHourMinutesWithoutAMPM;
- (id)localizedHour;
- (id)localizedHourMinutes;
- (id)localizedTime;
- (id)localizedLongDayOfWeekWithDayOfMonth;
- (id)localizedAbbrevDayOfWeek;
- (id)localizedLongDayOfWeek;
- (id)localizedAbbrevDayMonthWithoutDayOfWeek;
- (id)localizedLongDayMonthWithoutDayOfWeek;
- (id)localizedShortDateWithoutYear;
- (id)localizedAbbrevDateWithoutYear;
- (id)localizedLongDateWithoutYear;
- (id)localizedLongDateWithoutDay;
- (id)localizedShortDate;
- (id)localizedAbbrevDate;
- (id)localizedLongDate;
- (id)localizedAbbreviatedMonth;
- (id)localizedDayOfMonthWithoutLeadingZero;
- (id)localizedShortDateAndTime;
- (id)localizedFullDateAndTime;
- (id)localizedMonth;
- (id)localizedYear;
- (id)localizedWithICUFormat:(id)arg1;
- (id)localizedWithFormatKey:(id)arg1;
- (id)representationID;
- (id)NSCalendarDateForISync;

@end

