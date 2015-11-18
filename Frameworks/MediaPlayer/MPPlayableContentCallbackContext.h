/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:44 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject {

	char _serviced;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) char serviced;                          //@synthesize serviced=_serviced - In the implementation block
-(char)serviced;
-(void)setServiced:(char)arg1 ;
-(id)initWithIndexPath:(id)arg1 ;
-(NSIndexPath *)indexPath;
@end

