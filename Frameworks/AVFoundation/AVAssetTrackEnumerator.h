/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 4:16:00 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSString, NSArray, NSEnumerator;

@interface AVAssetTrackEnumerator : NSEnumerator {

	NSString* _mediaType;
	NSArray* _mediaCharacteristics;
	NSEnumerator* _enumerator;

}
+(id)trackEnumeratorWithAsset:(id)arg1 ;
-(id)initWithAsset:(id)arg1 mediaType:(id)arg2 ;
-(id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2 ;
-(void)setMediaCharacteristics:(id)arg1 ;
-(void)setMediaType:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithAsset:(id)arg1 ;
@end
