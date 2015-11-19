/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface OADTextListStyle : NSObject {

	NSMutableArray* mParagraphProperties;
	NSString* mLanguage;

}

@property (nonatomic,retain) NSString * language; 
+(id)defaultObject;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)propertiesForListLevel:(unsigned)arg1 ;
-(id)defaultProperties;
-(id)initWithDefaults;
-(void)setParentTextListStyle:(id)arg1 ;
-(void)overrideWithTextStyle:(id)arg1 ;
-(void)changeParentTextListStylePreservingEffectiveValues:(id)arg1 ;
-(void)flatten;
-(void)removeUnnecessaryOverrides;
-(void)setPropertiesForListLevel:(unsigned)arg1 properties:(id)arg2 ;
-(void)enumerateParagraphPropertiesUsingBlock:(/*^block*/id)arg1 ;
@end

