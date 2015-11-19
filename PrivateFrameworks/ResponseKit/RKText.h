/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ResponseKit/ResponseKit-Structs.h>
@class NSString, NSMutableArray;

@interface RKText : NSObject {

	char _trainVerbatim;
	NSString* _string;
	NSString* _languageID;
	NSMutableArray* _annotations;
	NSString* _processedText;
	double _trainingWeight;

}

@property (retain) NSString * string;                         //@synthesize string=_string - In the implementation block
@property (retain) NSString * languageID;                     //@synthesize languageID=_languageID - In the implementation block
@property (assign) double trainingWeight;                     //@synthesize trainingWeight=_trainingWeight - In the implementation block
@property (assign) char trainVerbatim;                        //@synthesize trainVerbatim=_trainVerbatim - In the implementation block
@property (retain) NSMutableArray * annotations;              //@synthesize annotations=_annotations - In the implementation block
@property (retain) NSString * processedText;                  //@synthesize processedText=_processedText - In the implementation block
+(void)initialize;
+(id)annotationNameFromType:(unsigned)arg1 ;
+(char)canClassifyPolarityForLanguageIdentifier:(id)arg1 withOptions:(unsigned)arg2 dataProvider:(id)arg3 ;
+(unsigned)annotationTypeFromName:(id)arg1 ;
+(id)polarityNameFromType:(unsigned)arg1 ;
+(unsigned)polarityTypeFromName:(id)arg1 ;
+(char)canClassifyPolarityForLanguageIdentifier:(id)arg1 withOptions:(unsigned)arg2 ;
-(NSMutableArray *)annotations;
-(id)init;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(void)setAnnotations:(NSMutableArray *)arg1 ;
-(id)taggedText;
-(NSString *)languageID;
-(void)setLanguageID:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 trainingWeight:(double)arg3 trainVerbatim:(char)arg4 ;
-(void)annotateRange:(NSRange)arg1 type:(unsigned)arg2 machineGenerated:(char)arg3 ;
-(void)setProcessedText:(NSString *)arg1 ;
-(double)trainingWeight;
-(char)trainVerbatim;
-(void)annotateRange:(NSRange)arg1 type:(unsigned)arg2 ;
-(id)subTextWithRange:(NSRange)arg1 ;
-(NSString *)processedText;
-(unsigned)polarityClassificationWithOptions:(unsigned)arg1 dataProvider:(id)arg2 ;
-(id)lsmText;
-(id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 ;
-(void)enumerateAnnotationsInRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)cleanupData;
-(id)subTextsByPolarity;
-(unsigned)annotatedPolarity;
-(unsigned)polarityClassificationWithOptions:(unsigned)arg1 ;
-(void)setTrainingWeight:(double)arg1 ;
-(void)setTrainVerbatim:(char)arg1 ;
@end

