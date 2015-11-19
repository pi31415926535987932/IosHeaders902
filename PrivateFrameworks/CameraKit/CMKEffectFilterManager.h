/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:14 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface CMKEffectFilterManager : NSObject {

	NSMutableArray* _effects;
	NSMutableArray* _names;
	NSMutableArray* _aggdNames;

}
+(id)sharedInstance;
-(id)init;
-(id)filterForIndex:(unsigned)arg1 ;
-(unsigned)blackAndWhiteFilterStartIndex;
-(void)_addEffectNamed:(id)arg1 aggdName:(id)arg2 filter:(id)arg3 ;
-(unsigned)_indexForFilter:(id)arg1 ;
-(unsigned)blackAndWhiteFilterCount;
-(id)displayNameForIndex:(unsigned)arg1 ;
-(id)displayNameForFilter:(id)arg1 ;
-(id)aggdNameForFilter:(id)arg1 ;
-(unsigned)filterCount;
@end

