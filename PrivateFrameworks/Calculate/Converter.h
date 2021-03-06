/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:11 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Calculate.framework/Calculate
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber, NSArray;

@interface Converter : NSObject {

	NSString* _inputString;
	NSString* _inputUnit;
	NSString* _outputUnit;
	NSNumber* _outputValue;
	NSNumber* _inputValue;
	NSString* _localizedInputValueAndUnit;
	NSString* _localizedOutputValueAndUnit;
	NSString* _localizedOutputValue;
	NSString* _localizedOutputUnit;
	char _isCurrency;
	float _currencyUpdateTimeOut;
	NSArray* _additionalResults;
	NSString* _conversionType;

}

@property (assign) float currencyUpdateTimeOut;                         //@synthesize currencyUpdateTimeOut=_currencyUpdateTimeOut - In the implementation block
@property (retain) NSString * inputString;                              //@synthesize inputString=_inputString - In the implementation block
@property (retain) NSString * inputUnit;                                //@synthesize inputUnit=_inputUnit - In the implementation block
@property (retain) NSString * outputUnit;                               //@synthesize outputUnit=_outputUnit - In the implementation block
@property (retain) NSNumber * inputValue;                               //@synthesize inputValue=_inputValue - In the implementation block
@property (retain) NSNumber * outputValue;                              //@synthesize outputValue=_outputValue - In the implementation block
@property (retain) NSString * localizedInputValueAndUnit;               //@synthesize localizedInputValueAndUnit=_localizedInputValueAndUnit - In the implementation block
@property (retain) NSString * localizedOutputValueAndUnit;              //@synthesize localizedOutputValueAndUnit=_localizedOutputValueAndUnit - In the implementation block
@property (retain) NSString * localizedOutputValue;                     //@synthesize localizedOutputValue=_localizedOutputValue - In the implementation block
@property (retain) NSString * localizedOutputUnit;                      //@synthesize localizedOutputUnit=_localizedOutputUnit - In the implementation block
@property (readonly) char isCurrency;                                   //@synthesize isCurrency=_isCurrency - In the implementation block
@property (retain) NSString * conversionType;                           //@synthesize conversionType=_conversionType - In the implementation block
@property (retain) NSArray * additionalResults;                         //@synthesize additionalResults=_additionalResults - In the implementation block
+(id)currencyCacheLastRefreshDate;
+(char)refreshCurrencyCache;
-(void)setInputValue:(NSNumber *)arg1 ;
-(NSNumber *)outputValue;
-(void)dealloc;
-(NSString *)inputString;
-(void)setInputUnit:(NSString *)arg1 ;
-(void)setOutputUnit:(NSString *)arg1 ;
-(void)setOutputValue:(NSNumber *)arg1 ;
-(void)setLocalizedInputValueAndUnit:(NSString *)arg1 ;
-(void)setLocalizedOutputValue:(NSString *)arg1 ;
-(void)setLocalizedOutputUnit:(NSString *)arg1 ;
-(void)setAdditionalResults:(NSArray *)arg1 ;
-(void)setConversionType:(NSString *)arg1 ;
-(char)_parseInputQuery;
-(void)_standardizeInputAndOutputUnits;
-(NSString *)inputUnit;
-(NSString *)outputUnit;
-(id)_unitInfoForNormalizedName:(id)arg1 ;
-(id)similarUnitsForNormalizedName:(id)arg1 ;
-(id)_operateConversionForOutputUnit:(id)arg1 ;
-(void)_performUnitPluralization;
-(NSString *)localizedOutputValue;
-(NSString *)localizedOutputUnit;
-(NSString *)localizedInputValueAndUnit;
-(id)_localizedPluralizedStringsforNumber:(id)arg1 unit:(id)arg2 ;
-(void)_updateInputValueFromMatch:(id)arg1 ;
-(id)_unitsInfo;
-(id)_normalizedUnitNamesForName:(id)arg1 ;
-(void)setLocalizedOutputValueAndUnit:(NSString *)arg1 ;
-(double)_doubleWithoutUnrelevantDecimalsForNumber:(id)arg1 ;
-(void)processConversionWithCompletion:(/*^block*/id)arg1 ;
-(char)isCurrency;
-(float)currencyUpdateTimeOut;
-(void)setCurrencyUpdateTimeOut:(float)arg1 ;
-(NSArray *)additionalResults;
-(NSString *)conversionType;
-(NSString *)localizedOutputValueAndUnit;
-(id)initWithInput:(id)arg1 ;
-(NSNumber *)inputValue;
-(void)setInputString:(NSString *)arg1 ;
@end

