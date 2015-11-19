/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:33 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Sharing/Sharing-Structs.h>
@class NSString, UIImage;

@interface SFAirDropNode : NSObject {

	SFOperationRef _sender;
	char _unknown;
	char _monogram;
	char _supportsPasses;
	char _supportsFMF;
	char _supportsMixedTypes;
	char _isConversation;
	id _node;
	NSString* _realName;
	UIImage* _displayIcon;
	NSString* _displayName;
	NSString* _secondaryName;

}

@property (retain) id node;                                //@synthesize node=_node - In the implementation block
@property (retain) NSString * realName;                    //@synthesize realName=_realName - In the implementation block
@property (retain) UIImage * displayIcon;                  //@synthesize displayIcon=_displayIcon - In the implementation block
@property (retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (retain) NSString * secondaryName;               //@synthesize secondaryName=_secondaryName - In the implementation block
@property (getter=isUnknown) char unknown;                 //@synthesize unknown=_unknown - In the implementation block
@property (getter=isMonogram) char monogram;               //@synthesize monogram=_monogram - In the implementation block
@property (readonly) char supportsPasses;                  //@synthesize supportsPasses=_supportsPasses - In the implementation block
@property (readonly) char supportsFMF;                     //@synthesize supportsFMF=_supportsFMF - In the implementation block
@property (readonly) char supportsMixedTypes;              //@synthesize supportsMixedTypes=_supportsMixedTypes - In the implementation block
@property (readonly) char isConversation;                  //@synthesize isConversation=_isConversation - In the implementation block
+(id)nodeWithSFNode:(SFNodeRef)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setMonogram:(char)arg1 ;
-(id)node;
-(NSString *)displayName;
-(void)setNode:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)updateWithSFNode:(SFNodeRef)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long)arg2 withResults:(id)arg3 ;
-(void)setDisplayIcon:(UIImage *)arg1 ;
-(void)setSecondaryName:(NSString *)arg1 ;
-(void)setRealName:(NSString *)arg1 ;
-(void)cancelSend;
-(void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4 ;
-(void)simulateFakeTransferWithSessionID:(id)arg1 ;
-(NSString *)realName;
-(UIImage *)displayIcon;
-(NSString *)secondaryName;
-(char)isMonogram;
-(char)supportsPasses;
-(char)supportsFMF;
-(char)supportsMixedTypes;
-(char)isConversation;
-(char)isUnknown;
-(void)setUnknown:(char)arg1 ;
@end

