/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@interface SBSIMLockEntryAlert : SBAlert {

	int _status;

}
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)lockEntryView;
-(char)_forcesPortraitOrientation;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)deactivate;
-(int)preferredInterfaceOrientationForPresentation;
-(void)activate;
-(int)status;
-(char)hasTranslucentBackground;
@end

