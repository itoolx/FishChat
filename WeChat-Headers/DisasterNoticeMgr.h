//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString;

@interface DisasterNoticeMgr : MMService <PBMessageObserverDelegate, IMsgExt, MMService>
{
    _Bool m_isGettingDisasterInfo;
    NSMutableDictionary *m_dicSvrErrorInfo;
    NSMutableDictionary *m_dictBannerInfos;
    NSMutableDictionary *m_dictCloseTime;
}

- (void).cxx_destruct;
- (void)HandleXmlMessage:(id)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (_Bool)hasNotice;
- (void)closeDisasterInfoByNoticeId:(id)arg1;
- (id)getDisasterInfoByPosition:(id)arg1;
- (void)handleDisasterInfo:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)getDisasterInfo:(unsigned int)arg1;
- (void)MainThreadNotifyIDCErrorMsg:(id)arg1;
- (void)onNewIDCError:(id)arg1;
- (void)SaveData;
- (void)removeExpireInfos;
- (void)makeSureInit;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

