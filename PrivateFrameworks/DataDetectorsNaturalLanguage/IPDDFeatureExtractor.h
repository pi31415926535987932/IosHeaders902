/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
#import <DataDetectorsNaturalLanguage/IPFeatureExtractor.h>

@interface IPDDFeatureExtractor : IPFeatureExtractor
+(unsigned)extractorVersion;
-(DDScannerRef)scanner;
-(NSRange)textRangeReferencingWeekEnd:(id)arg1 ;
-(id)thisSaturdayDateFromReferenceDate:(id)arg1 ;
-(NSRange)textRangeReferencingTomorrow:(id)arg1 ;
-(id)tomorrowDateFromReferenceDate:(id)arg1 ;
-(NSRange)textRangeReferencingValentineDay:(id)arg1 ;
-(id)valentineDayDateFromReferenceDate:(id)arg1 ;
-(NSRange)textRangeReferencingNewYearsEve:(id)arg1 ;
-(id)newYearsEveDayDateFromReferenceDate:(id)arg1 ;
-(NSRange)textRangeReferencingBreakfast:(id)arg1 ;
-(id)featureDataComplementingFeatureData:(id)arg1 hour:(unsigned)arg2 minute:(unsigned)arg3 duration:(double)arg4 ;
-(NSRange)textRangeReferencingMorning:(id)arg1 ;
-(NSRange)textRangeReferencingBrunch:(id)arg1 ;
-(NSRange)textRangeReferencingLunchOrNoon:(id)arg1 ;
-(NSRange)textRangeReferencingAfternoon:(id)arg1 ;
-(NSRange)textRangeReferencingDinnerOrEvening:(id)arg1 ;
-(NSRange)textRangeReferencingParty:(id)arg1 ;
-(id)featuresForTextUnit:(id)arg1 inMessageUnit:(id)arg2 context:(id)arg3 ;
-(id)stringByReplacingDetectedDataWithNGramMarkersInString:(id)arg1 ;
@end

