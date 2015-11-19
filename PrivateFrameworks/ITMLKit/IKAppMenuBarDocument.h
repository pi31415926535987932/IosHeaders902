/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKJSMenuBarDocumentAppBridge.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol NSCopying, IKAppMenuBarDocumentDelegate;
@class IKDOMNode, NSMutableDictionary, IKAppContext, NSString, IKViewElement;

@interface IKAppMenuBarDocument : NSObject <IKJSMenuBarDocumentAppBridge, IKDOMFeature> {

	IKDOMNode* _parentDOMNode;
	NSMutableDictionary* _jsDocumentsByEntityUniqueIdentifier;
	NSMutableDictionary* _documentsByEntityUniqueIdentifier;
	NSMutableDictionary* _documentOptionsByEntityUniqueIdentifier;
	id<NSCopying> _selectedEntityUniqueIdentifier;
	IKAppContext* _appContext;
	NSString* _featureName;
	id<IKAppMenuBarDocumentDelegate> _delegate;
	IKViewElement* _menuBarElement;

}

@property (assign,nonatomic,__weak) id<IKAppMenuBarDocumentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IKViewElement * selectedMenuItem; 
@property (assign,nonatomic,__weak) IKViewElement * menuBarElement;                         //@synthesize menuBarElement=_menuBarElement - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                 //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                            //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)setDelegate:(id<IKAppMenuBarDocumentDelegate>)arg1 ;
-(id<IKAppMenuBarDocumentDelegate>)delegate;
-(id)jsMenuBarDocument:(id)arg1 documentForEntityUniqueIdentifier:(id)arg2 ;
-(void)jsMenuBarDocument:(id)arg1 setDocument:(id)arg2 forEntityUniqueIdentifier:(id)arg3 withOptions:(id)arg4 ;
-(void)jsMenuBarDocument:(id)arg1 setSelectedEntityUniqueIdentifier:(id)arg2 withOptions:(id)arg3 ;
-(id)_menuItemElementForEntityUniqueIdentifier:(id)arg1 ;
-(IKViewElement *)menuBarElement;
-(void)setMenuBarElement:(IKViewElement *)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(IKViewElement *)selectedMenuItem;
-(id)documentForEntityUniqueIdentifier:(id)arg1 ;
-(id)documentForMenuItem:(id)arg1 ;
-(id)documentOptionsForEntityUniqueIdentifier:(id)arg1 ;
-(id)documentOptionsForMenuItem:(id)arg1 ;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(void)migrateToViewElement:(id)arg1 ;
@end

