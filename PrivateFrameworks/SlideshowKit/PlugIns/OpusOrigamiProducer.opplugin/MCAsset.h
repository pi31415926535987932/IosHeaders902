/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class NSString;

@interface MCAsset : MCObject {

	NSString* mPath;

}

@property (copy) NSString * path; 
@property (nonatomic,readonly) char isInUse; 
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(char)isInUse;
-(id)imprint;
@end
