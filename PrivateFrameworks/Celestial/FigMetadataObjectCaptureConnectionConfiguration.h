/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureConnectionConfiguration.h>

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration {

	NSArray* _metadataIdentifiers;
	CGRect _metadataRectOfInterest;

}

@property (nonatomic,copy) NSArray * metadataIdentifiers;                //@synthesize metadataIdentifiers=_metadataIdentifiers - In the implementation block
@property (assign,nonatomic) CGRect metadataRectOfInterest;              //@synthesize metadataRectOfInterest=_metadataRectOfInterest - In the implementation block
-(void)setMetadataIdentifiers:(NSArray *)arg1 ;
-(void)setMetadataRectOfInterest:(CGRect)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)metadataIdentifiers;
-(CGRect)metadataRectOfInterest;
@end

