/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol AdditionalInfoProtocol;
@class NSMutableArray, SimpleSyndromeHandler, NSString;

@interface SimpleRuleEvaluator : NSObject <ConfigurableObjectProtocol> {

	NSMutableArray* _conditionsToCheck;
	char* _stringToLog;
	unsigned long long _awd_code;
	SimpleSyndromeHandler* _syndromeToCall;
	id<AdditionalInfoProtocol> _additionalInfoGenerator;
	SEL _additionalInfoSelector;
	NSString* _signatureName;

}

@property (nonatomic,retain) NSString * signatureName;              //@synthesize signatureName=_signatureName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithName:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
-(NSString *)description;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)setSignatureName:(NSString *)arg1 ;
-(void)evaluateSignatureForEvent:(id)arg1 ;
-(NSString *)signatureName;
@end

