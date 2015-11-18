/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MPPlayableContentManagerContext : NSObject {

	char _contentLimitsEnforced;
	char _endpointAvailable;
	int _enforcedContentItemsCount;
	int _enforcedContentTreeDepth;

}

@property (assign,nonatomic) int enforcedContentItemsCount;              //@synthesize enforcedContentItemsCount=_enforcedContentItemsCount - In the implementation block
@property (assign,nonatomic) int enforcedContentTreeDepth;               //@synthesize enforcedContentTreeDepth=_enforcedContentTreeDepth - In the implementation block
@property (assign,nonatomic) char contentLimitsEnforced;                 //@synthesize contentLimitsEnforced=_contentLimitsEnforced - In the implementation block
@property (nonatomic,readonly) char contentLimitsEnabled; 
@property (assign,nonatomic) char endpointAvailable;                     //@synthesize endpointAvailable=_endpointAvailable - In the implementation block
-(void)setContentLimitsEnforced:(char)arg1 ;
-(void)setEnforcedContentItemsCount:(int)arg1 ;
-(void)setEnforcedContentTreeDepth:(int)arg1 ;
-(void)setEndpointAvailable:(char)arg1 ;
-(char)contentLimitsEnforced;
-(char)contentLimitsEnabled;
-(int)enforcedContentItemsCount;
-(int)enforcedContentTreeDepth;
-(char)endpointAvailable;
@end

