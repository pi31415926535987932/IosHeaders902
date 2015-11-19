/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface SymptomStore : NSObject {

	unsigned symptomIdent;
	NSString* symptomName;
	char* symptomUTF8Name;
	NSString* symptomKey;
	NSMutableArray* symptomHistory;
	unsigned symptomMinRetainTime;
	unsigned symptomMinSavedCount;
	double* symptomArrivalTimes;
	unsigned symptomArrivalTimeNextIdx;

}

@property (assign,nonatomic) unsigned symptomIdent; 
@property (nonatomic,retain) NSString * symptomKey; 
@property (nonatomic,retain) NSString * symptomName; 
@property (assign,nonatomic) char* symptomUTF8Name; 
@property (nonatomic,retain) NSMutableArray * symptomHistory; 
+(id)description;
+(void)initialize;
+(int)configure:(id)arg1 ;
+(unsigned)numSymptomsWithKey:(id)arg1 retainTime:(unsigned)arg2 ;
+(id)keyFromSymptomName:(id)arg1 ;
+(void)resetSymptomsWithKey:(id)arg1 ;
+(id)idFromReporterName:(id)arg1 ;
+(id)idFromSymptomName:(id)arg1 ;
+(void)setRetainCount:(unsigned)arg1 forSymptom:(id)arg2 ;
+(void)setRetainTime:(unsigned)arg1 forSymptom:(id)arg2 ;
+(id)storedSymptomsWithKey:(id)arg1 ;
+(id)storeFromSymptomKey:(id)arg1 ;
+(id)keyFromSymptomId:(unsigned)arg1 ;
+(id)nameFromSymptomKey:(id)arg1 ;
+(void)_createForName:(id)arg1 key:(id)arg2 id:(unsigned)arg3 ;
+(int)addFromReporter:(id)arg1 ;
+(void)noteReceivedSymptom:(id)arg1 ;
+(id)nameFromSymptomId:(unsigned)arg1 ;
+(id)nameFromReporterId:(unsigned)arg1 ;
+(void)pruneSymptomsWithKey:(id)arg1 ;
-(id)description;
-(unsigned)symptomIdent;
-(NSString *)symptomName;
-(void)setSymptomHistory:(NSMutableArray *)arg1 ;
-(void)setSymptomIdent:(unsigned)arg1 ;
-(void)setSymptomKey:(NSString *)arg1 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)setSymptomUTF8Name:(char*)arg1 ;
-(void)noteReceivedSymptom:(id)arg1 ;
-(void)setRetainTime:(unsigned)arg1 ;
-(void)setRetainCount:(unsigned)arg1 ;
-(NSMutableArray *)symptomHistory;
-(unsigned)numSymptomsWithRetainTime:(unsigned)arg1 ;
-(void)_pruneSymptomsForDate:(id)arg1 ;
-(NSString *)symptomKey;
-(char*)symptomUTF8Name;
@end

