/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/EDKeyedObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class EDCollection, EDDifferentialStyle, NSString;

@interface EDTableStyleElement : NSObject <EDKeyedObject, NSCopying> {

	EDCollection* mDifferentialStyles;
	int mType;
	unsigned mBandSize;
	EDDifferentialStyle* mDifferentialStyle;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableStyleElementWithResources:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(int)key;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithResources:(id)arg1 ;
-(id)differentialStyle;
-(void)setDifferentialStyle:(id)arg1 ;
-(unsigned)bandSize;
-(void)setBandSize:(unsigned)arg1 ;
-(void)setDifferentialStyleWithIndex:(unsigned)arg1 ;
@end
