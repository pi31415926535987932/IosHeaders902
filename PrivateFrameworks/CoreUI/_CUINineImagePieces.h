/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CUIImage;

@interface _CUINineImagePieces : NSObject {

	CUIImage* _center;
	CUIImage* _topLeft;
	CUIImage* _top;
	CUIImage* _topRight;
	CUIImage* _right;
	CUIImage* _bottomRight;
	CUIImage* _bottom;
	CUIImage* _bottomLeft;
	CUIImage* _left;
	char _tileCenterAndEdges;

}
-(void)dealloc;
-(id)center;
-(id)initWithCenter:(id)arg1 topLeft:(id)arg2 top:(id)arg3 topRight:(id)arg4 right:(id)arg5 bottomRight:(id)arg6 bottom:(id)arg7 bottomLeft:(id)arg8 left:(id)arg9 tileCenterAndEdges:(char)arg10 ;
-(id)topLeft;
-(id)topRight;
-(id)bottomRight;
-(id)bottomLeft;
-(char)tileCenterAndEdges;
-(id)left;
-(id)top;
-(id)right;
-(id)bottom;
@end

