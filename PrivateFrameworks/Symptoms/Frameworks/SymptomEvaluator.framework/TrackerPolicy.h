/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface TrackerPolicy : NSObject {

	unsigned _defaultDisposition;
	unsigned _numClassMaps;
	SCD_Struct_Tr9 _classMap[12];
	unsigned _numMgmtFlagsMaps;
	SCD_Struct_Tr9 _mgmtFlagsMap[4];

}
-(id)init;
-(id)description;
-(int)configureInstance:(id)arg1 ;
-(void)addDisposition:(unsigned)arg1 forTrafficClass:(unsigned)arg2 ;
-(void)addDisposition:(unsigned)arg1 forTrafficMgmtFlags:(unsigned)arg2 ;
-(unsigned)flowDispositionFor:(id)arg1 ;
@end

