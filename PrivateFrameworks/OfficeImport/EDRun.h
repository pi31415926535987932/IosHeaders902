/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/EDKeyedObject.h>

@class EDResources, NSArray, NSString;

@interface EDRun : NSObject <EDKeyedObject> {

	EDResources* mResources;
	unsigned mCharIndex;
	unsigned mFontIndex;
	NSArray* mEffects;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)runWithCharIndex:(unsigned)arg1 font:(id)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned)arg1 fontIndex:(unsigned)arg2 resources:(id)arg3 ;
+(id)runWithCharIndex:(unsigned)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4 ;
+(id)runWithResources:(id)arg1 ;
+(id)runWithCharIndex:(unsigned)arg1 fontIndex:(unsigned)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(int)key;
-(void)setFont:(id)arg1 ;
-(id)font;
-(unsigned)charIndex;
-(id)effects;
-(void)setFontIndex:(unsigned)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(void)overrideFont:(id)arg1 ;
-(unsigned)fontIndex;
-(id)initWithCharIndex:(unsigned)arg1 font:(id)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(unsigned)arg1 font:(id)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(char)isEqualToRun:(id)arg1 ;
-(id)initWithCharIndex:(unsigned)arg1 fontIndex:(unsigned)arg2 resources:(id)arg3 ;
-(id)initWithCharIndex:(unsigned)arg1 fontIndex:(unsigned)arg2 effects:(id)arg3 resources:(id)arg4 ;
-(void)adjustIndex:(unsigned)arg1 ;
-(void)setCharIndex:(unsigned)arg1 ;
@end

