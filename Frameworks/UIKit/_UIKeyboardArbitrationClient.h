/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIKeyboardArbitrationClient
@required
-(void)queue_keyboardChanged:(id)arg1 onComplete:(/*^block*/id)arg2;
-(void)queue_keyboardChangedWithCompletion:(/*^block*/id)arg1;
-(void)queue_keyboardTransition:(id)arg1 event:(unsigned)arg2 withInfo:(id)arg3 onComplete:(/*^block*/id)arg4;
-(void)queue_keyboardSuppressed:(char)arg1 withCompletion:(/*^block*/id)arg2;
-(void)queue_applicationLostFocusWithCompletion:(/*^block*/id)arg1;

@end

