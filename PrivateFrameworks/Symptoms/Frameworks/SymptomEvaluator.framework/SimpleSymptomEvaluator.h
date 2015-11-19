/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol SymptomAdditionalProtocol;
@class NSString, NSMutableArray;

@interface SimpleSymptomEvaluator : NSObject <ConfigurableObjectProtocol> {

	NSString* symptomName;
	NSString* symptomKey;
	const char* symptomUTF8Name;
	unsigned symptomSaveFlags;
	unsigned symptomSaveAdditionalId;
	unsigned symptomMaxRetainTime;
	id<SymptomAdditionalProtocol> symptomAdditionalHandlers[4];
	NSMutableArray* symptomRules;

}

@property (nonatomic,retain) NSString * symptomName; 
@property (nonatomic,retain) NSString * symptomKey; 
@property (assign,nonatomic) const char* symptomUTF8Name; 
@property (assign,nonatomic) unsigned symptomSaveFlags; 
@property (assign,nonatomic) unsigned symptomSaveAdditionalId; 
@property (assign,nonatomic) unsigned symptomMaxRetainTime; 
@property (nonatomic,retain) NSMutableArray * symptomRules; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)objectWithName:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
+(id)_defaultEvaluator;
+(void)postIncomingEvent:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(id)initWithName:(id)arg1 ;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(unsigned)symptomSaveFlags;
-(void)setSymptomSaveFlags:(unsigned)arg1 ;
-(unsigned)symptomMaxRetainTime;
-(void)setSymptomMaxRetainTime:(unsigned)arg1 ;
-(unsigned)symptomSaveAdditionalId;
-(void)setSymptomSaveAdditionalId:(unsigned)arg1 ;
-(NSString *)symptomName;
-(void)setSymptomKey:(NSString *)arg1 ;
-(void)setSymptomName:(NSString *)arg1 ;
-(void)setSymptomUTF8Name:(const char*)arg1 ;
-(NSString *)symptomKey;
-(const char*)symptomUTF8Name;
-(void)evaluateIncomingEvent:(id)arg1 ;
-(NSMutableArray *)symptomRules;
-(void)setSymptomRules:(NSMutableArray *)arg1 ;
@end

