/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:31:45 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPAVRoutingController;

@interface MPAVDestinationBrowser : NSObject {

	MPAVRoutingController* _routingController;
	char _scansForDestinationsWhenEnteringForeground;
	char _isScanning;

}

@property (assign,nonatomic) char scansForDestinationsWhenEnteringForeground; 
-(void)_beginScanningForDestinationsNotification:(id)arg1 ;
-(void)_endScanningForDestinationsNotification:(id)arg1 ;
-(void)setScansForDestinationsWhenEnteringForeground:(char)arg1 ;
-(void)endScanningForDestinations;
-(void)beginScanningForDestinations;
-(char)scansForDestinationsWhenEnteringForeground;
-(void)dealloc;
-(id)init;
@end
